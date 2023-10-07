FROM debian

RUN apt update -y
RUN apt upgrade -y
RUN apt install build-essential cmake -yq

