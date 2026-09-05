//npm - global command, comes with node
//npm --version
//local dependency -use it only in this particular project
//npm i <packageName>
//global dependency - use it in any project
//npm install -g <packageName>
//package.json - manifest file(stores important info about project.package)
//manual approach (create package.json in the root , create properties, etc)
//npm init (step by step, press enter to skip)
//npm init -y (everything default)
var http=require('http');
var fs=require('fs');
http.createServer(function(req,res){
    const fileStream=fs.createReadStream('./content/big.txt','utf8');
    fileStream.on('open',()=>{
        fileStream.pipe(res)
    })
    fileStream.on('error',(err)=>{
        res.end(err);
    })
})
.listen()