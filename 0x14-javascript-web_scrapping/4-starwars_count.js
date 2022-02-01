#!/usr/bin/node

const axios = require('axios');
let url = process.argv[2];

axios.get(url).then(function(res) {
    let films = res.data.results;
    let count = 0;
    for (let i in films) {
	let chars = films[i].characters;
	for (let c in chars) {
	    if (chars[c].includes("18")) {
		count += 1;
	    }
	}
    }
    console.log(count);
});                   
