import React from 'react'
import Header from "./mycomponents/Header";
import {Todos} from "./mycomponents/Todos";
import {Footer} from "./mycomponents/Footer";

function App() {
  let todos = [
    {
      sno : 1,
      name : "test name 1",
      des : "test descp 1"
    },
    {
      sno : 2,
      name : "test name 2",
      des : "test descp 2"
    },
    {
      sno : 3,
      name : "test name 3",
      des : "test descp 3"
    }
  ]
  return (
    <>
    <Header searchBar = {true}/>
    <Todos todos={todos}/>
    <Footer/>
    </>
  );
}

export default App;