#!/usr/bin/node

let url = process.argv[2];
const axios = require('axios');

axios.get(url).then(function (response) {
    console.log('code: ' + response['status']);
});
