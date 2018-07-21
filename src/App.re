let str = ReasonReact.string;

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self => {
    Js.log("App");
    <div className="container App">
      <div className="row">
        <div className="twelve columns Title"> <h3> (str("App")) </h3> </div>
      </div>
      <div className="row">
        <div className="Body"> (str("Drag drop goes here")) </div>
      </div>
    </div>;
  },
};