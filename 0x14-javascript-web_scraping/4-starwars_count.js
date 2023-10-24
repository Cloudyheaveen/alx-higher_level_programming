const request = require('request');

if (process.argv.length !== 3) {
	console.log('Usage: node 4-starwars_count.js <API_URL>');
	process.exit(1);
}

const apiUrl = process.argv[2];

const characterId = 18;

request(apiUrl, (error, response, body) => {
  if (!error && response.statusCode === 200) {
    const films = JSON.parse(body).results;

    const filmsWithWedgeAntilles = films.filter((film) =>
      film.characters.includes(`https://swapi-api.alx-tools.com/api/people/${characterId}/`)
    );

    console.log(filmsWithWedgeAntilles.length);
  } else {
    console.error(error);
  }
});
