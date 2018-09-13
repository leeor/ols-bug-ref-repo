## Minimal reproduction repo

When `ocaml-language-server` is used as a linter through `w0rp/ale`, in a native project that uses
`rex-json` (JSON parser with native support) the following error is reported by `ale` on the first
line of the file:

```
Error: The files <project_root>/node_modules/rex-json/lib/ocaml/native/Json.cmi       and
<nvm_node_root>/lib/node_modules/reason-cli/3_________________/i/opam__slash__ocamlfind-1.8.0-f9df3f0a/lib/
ocaml/string.cmi       make inconsistent assumptions over interface String
```

