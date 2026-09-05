import { renderOrderSummary } from './checkout/order-summary.js';
import {renderPaymentSummary} from './checkout/payment-summary.js';
import {loadProducts,loadProductsFetch} from '../data/products.js';
import {loadCart} from '../data/cart.js';
//import '../data/cart-oop.js';
//import '../data/backend-practice.js';
async function loadPage()
{
    console.log('load page');
    await loadProductsFetch();
    return value2;
}
loadPage().then((value)=>{
    console.log('next-step');
});
Promise.all([
    loadProductsFetch(),
    new Promise((resolve)=>{
    console.log('start');
    loadProducts(()=>{
        resolve();
    });
}),
new Promise((resolve)=>{
        loadCart(()=>{
            resolve();
        });
    })
]).then(()=>{
    renderOrderSummary();
    renderPaymentSummary();
});
/*new Promise((resolve)=>{
    console.log('start');
    loadProducts(()=>{
        resolve();
    });
}).then(()=>{
    return new Promise((resolve)=>{
        loadCart(()=>{
            resolve();
        });
    });
}).then(()=>{
    renderOrderSummary();
    renderPaymentSummary();
});*/
/*loadProducts(()=>{
    loadCart(()=>{
        renderOrderSummary();
        renderPaymentSummary();
    });
});*/
