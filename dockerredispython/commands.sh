docker run -d --name redis -p 6379:6379 redis:latest

docker build -t alpine:app .
docker -d --name app -p 4000:80 --link redis alpine:app

docker-compose up -d     #levantar conjunto de servicios
docker-compose down      #terminar conjunto de servicios

#listar volumenes
docker volume ls

#revisar volumenes
docker inspect dockercomposesample1_data
