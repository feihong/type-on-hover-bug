install:
	npm install && opam install -y . --deps-only --with-test && opam exec opam-check-npm-deps

init:
	opam switch create . 5.2.0 -y --deps-only && make install

build:
	dune build

watch:
	dune build --watch

serve:
	npx vite serve --open
