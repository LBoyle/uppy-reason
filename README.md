# uppy-reason
Playing with Uppy DragDrop on ReasonReact, previews using base64 

- Clone repo
- Run ```npm install```

To develop, you need two terminal windows, 
- One for ```bsb -watch-world -w```, run ```bsb -clean-world``` beforehand, you know the drill
- One for ```npm run dev```, which startes the parcel-bundler dev server

Sass is already set up, import your sass files into main.scss and let parcel-bundler do the rest. 

Check out the other script in package.json, ```npm run build``` which produces a production build, minified TO THE EXTREEME using the experimental options. 
