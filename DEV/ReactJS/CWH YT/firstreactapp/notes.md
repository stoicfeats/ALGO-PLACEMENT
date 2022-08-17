props -> passing data from parent app to child component 
example : here is a parent component in app.js 
<Header/> now if I add a title ( to pass it to my component) <Header title="My Todo List"> 
now I have to pass props in my component function argument like : export default function Header(props) 
and then I can use this props keyword to access the pass argument anywhere : {props.title} will give me My Todo List 

we can pass javascript also in our main app, like <Header title="My todo list" searchbar = {true}>, now in our header app whenever we will use props.searchBar we can use it as condition like : {props.searchBar ? *execute something* : *else execute this* }

propTypes -> these are the types specified to our props, like header will be string type only also default proptypes are also available : header.defaultProps = { title : "default title"}

### few things on import and header :

function name should be same every where, like : export default function header (props) should be used as header only everywhere


if I want some component to be used by everyone by default, I can provide it's value inside the default props so now even if someone don't pass it in to app component then also it can be used in header.js