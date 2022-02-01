#!/usr/bin/node

let url = process.argv[2];
let filename = process.argv[3];
const fs = require('fs')
const axios = require('axios');
const fileStream = fs.createWriteStream(filename);

res = axios.get(url).then(function(res) {
    res.data.pipe(fileStream)
})
	.catch(error => {
	    console.log(error);
});
