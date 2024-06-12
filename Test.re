[@react.component]
let make = (~foo, ~bar) => {
  <div> {React.string(foo)} {bar |> string_of_int |> React.string} </div>;
};
