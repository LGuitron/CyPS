FROM alpine:latest
RUN apk install --update \
                  python \
                  python-dev \
                  py-pip \
        && pip install pipenv \
        && pip install Flask \
        && pip install Redist

WORKDIR /home/webapp
COPY . /home/webapp
CMD python rest.py
