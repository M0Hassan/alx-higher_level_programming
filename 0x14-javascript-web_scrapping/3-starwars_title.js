#!/usr/bin/node

let id = process.argv[2];
let url = "https://swapi-api.hbtn.io/api/films/" + id 
const axios = require('axios');

axios.get(url).then(function (response) {
    console.log(response.data['title']);
});

