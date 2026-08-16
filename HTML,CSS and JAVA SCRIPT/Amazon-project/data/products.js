import {formatCurrency} from '../scripts/utils/money.js'

class Product
{
  id;
  image;
  name;
  rating;
  priceCents;

  constructor(productDetails)
  {
    this.id = productDetails.id;
    this.image = productDetails.image;
    this.name = productDetails.name;
    this.rating = productDetails.rating;
    this.priceCents = productDetails.priceCents;
  }

  getStarsUrl()
  {
    return `images/ratings/rating-${(this.rating.stars)*10}.png`;
  }

  getPrice()
  {
    return `$${formatCurrency(this.priceCents)}`;
  }

  extraInfoHTML()
  {
    return'';
  }
}

class Clothing extends Product
{
  sizeChartLink;

  constructor(productDetails)
  {
    super(productDetails);
    this.sizeChartLink=productDetails.sizeChartLink;
  }

  extraInfoHTML()
  {
    return `
      <a href="${this.sizeChartLink}" target="_blank">Size Chart</a>
    `;
  }
}

/*
const date=new Date();
console.log(date);
console.log(date.toLocaleTimeString());
*/

/*
const object2={
  a:2,
  b:this.a
};
*/

function logThis()
{
  console.log(this);
}

logThis();
logThis.call('hello');

const product1=new Product({
    id: "e43638ce-6aa0-4b85-b27f-e1d07eb678c6",
    image: "images/products/athletic-cotton-socks-6-pairs.jpg",
    name: "Black and Gray Athletic Cotton Socks - 6 Pairs",
    rating: {
      stars: 4.5,
      count: 87
    },
    priceCents: 1090,
    keywords: [ 
      "socks",
      "sports",
      "apparel"
    ]
});

console.log(product1);

export function getProduct(productId)
{
  let matchingProduct;

  products.forEach((product)=>{
    if(product.id==productId)
    {
      matchingProduct=product;
    }
  });

  return matchingProduct;
}

export let products=[];

export function loadProductsFetch()
{
  const promise=fetch('https://supersimplebackend.dev/products')
    .then((response)=>{
      return response.json();
    })
    .then((productsData)=>{
      products=productsData.map((productDetails)=>{
        if(productDetails.type==='clothing')
        {
          return new Clothing(productDetails);
        }

        return new Product(productDetails);
      });
    });

  return promise;
}
/*
loadProductsFetch().then(()=>{
  console.log('next step');
});
*/
loadProductsFetch();

export function loadProducts(fun)
{
  const xhr=new XMLHttpRequest();

  xhr.addEventListener('load',()=>{
    products=JSON.parse(xhr.response).map((productDetails)=>{
      if(productDetails.type==='clothing')
      {
        return new Clothing(productDetails);
      }

      return new Product(productDetails);
    });

    fun();
  });

  xhr.open('GET','https://supersimplebackend.dev/products');
  xhr.send();
}