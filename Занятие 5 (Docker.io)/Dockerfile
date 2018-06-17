FROM ubuntu:xenial
MAINTAINER Nastia Mishkina
ADD "$PWD"/test /root/tmp/
VOLUME ["/home/nastia/Рабочий стол/Летняя школа Eltex/Занятие 5 (Docker.io)/test"]
RUN apt-get update && apt-get install -y gcc nano git make && \
    git clone https://github.com/StacyMi/Eltex-summer-school-.git \
    && cd Eltex-summer-school- \
    && git checkout test \
    && gcc 100_find_sum.c -o 100_find_sum \
    && cp 100_find_sum /root/tmp


