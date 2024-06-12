module App = {
  [@react.component]
  let make = () =>
    <div> <Test foo="hey" bar=42 /> <Test_Ocaml foo="hey" bar=42 /> </div>;
};

let node = ReactDOM.querySelector("#root");
switch (node) {
| None =>
  Js.Console.error("Failed to start React: couldn't find the #root element")
| Some(root) =>
  let root = ReactDOM.Client.createRoot(root);
  ReactDOM.Client.render(root, <App />);
};
