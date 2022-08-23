import React from 'react'
import "./style.css"

const Todo = () => {
  return (
    <>
    <div className="main-div">
      <div className="child-div">
        <figure>
          <img src="./images/todo.svg" alt="todolog" />
          <figcaption>Add Your List Here👇</figcaption>
        </figure>
        <div className="addItems">
          <input 
          type="text" 
          placeholder="✍️ Add Item"
          className="form-control"  
          />
          <i className="fa fa-plus     add-btn"></i>
          </div>
          <div className="showItems">
            <button className="btn effect04" data-sm-link-text="Remove All">
              <span>CHECK LIST</span>
            </button>
          </div>
      </div>
    </div>
    </>
  )
}

export default Todo