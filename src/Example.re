let data = {|
{
  "this": {
    "is": "nested"
  }
}
|};

let stuff =
  Json.Infix.(
    Json.parse(data)
    |> Json.get("this")
    |?> Json.get("is")
    |?> Json.string
    |? ""
  );

Unix.write_substring(Unix.stdout, stuff, 0, String.length(stuff));
