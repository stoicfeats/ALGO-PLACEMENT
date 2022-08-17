 import React from 'react';
 import "./style.css";

 export const Restaurant = () => {
   return (
     <>
     <div className="card-container">
        <div className="card">
            <div className="card-body">
                <span className="card-number card-circle subtle">1</span> 
                <span className="card-author subtle">Breakfast</span>
                <span className="card-description subtle">Lorem ipsum dolor sit amet consectetur adipisicing elit. Vel maiores cupiditate alias laudantium repellat debitis.</span>
                <div className="card-read">Read</div>
            </div>
        </div>
     </div>
     </>
   )
 }
 
export default Restaurant