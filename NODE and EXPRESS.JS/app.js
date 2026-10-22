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
const express=require('express');
const path=require('path');
const app=express();
app.use(express.static('./public'))
app.get('/',(req,res)=>{
    res.sendFile(path.resolve(__dirname,'./navbar-app/index.html'))
})
app.all('*',(req,res)=>{
    res.status(404).send('resource not found');
})
app.listen(5000,()=>{
    console.log('server is listening on port 5000....')
})