FROM tutum/apache-php:latest

RUN rm -fr /app
ADD . /app
WORKDIR /
COPY /opencart/upload/. /app 
RUN mv app/config-dist.php app/config.php
RUN mv app/admin/config-dist.php app/admin/config.php
WORKDIR /app
RUN chmod 0777 system/storage/cache/
RUN chmod 0777 system/storage/download/
RUN chmod 0777 system/storage/logs/
RUN chmod 0777 system/storage/modification/
RUN chmod 0777 system/storage/session/
RUN chmod 0777 system/storage/upload/
RUN chmod 0777 system/storage/vendor/
RUN chmod 0777 image/
RUN chmod 0777 image/cache/
RUN chmod 0777 image/catalog/
RUN chmod 0777 config.php
RUN chmod 0777 admin/config.php

EXPOSE 80
