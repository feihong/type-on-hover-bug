let make ~foo  ~bar  =
  ((div ~children:[React.string foo; (bar |> string_of_int) |> React.string]
      ())
  [@JSX ]) [@@react.component ]
