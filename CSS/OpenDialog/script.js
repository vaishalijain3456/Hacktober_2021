const dialog = document.querySelector("dialog");
const openDialogBtn = document.getElementById("open_dialog");
const closeDialogBtn = document.getElementById("close_dialog");

const elements = dialog.querySelectorAll(
  'a, button, input, textarea, select, details, [tabindex]:not([tabindex="-1"])'
);
const firstElement = elements[0];
const lastElement = elements[elements.length - 1];

const trapFocus = (e) => {
  if (e.key === "Tab") {
    const tabForwards = !e.shiftKey && document.activeElement === lastElement;
    const tabBackwards = e.shiftKey && document.activeElement === firstElement;

    if (tabForwards) {
      // only TAB is pressed, not SHIFT simultaneously
      // Prevent default behavior of keydown on TAB (i.e. focus next element)
      e.preventDefault();
      firstElement.focus();
    } else if (tabBackwards) {
      // TAB and SHIFT are pressed simultaneously
      e.preventDefault();
      lastElement.focus();
    }
  }
};

const openDialog = () => {
  dialog.showModal();
  dialog.addEventListener("keydown", trapFocus);

  /* Prevent closing the dialog on ESC */
  // dialog.addEventListener("keydown", (e) => {
  //   if (e.key === "Escape") {
  //     e.preventDefault();
  //   }
  // });
};

const closeDialog = (event) => {
  event.preventDefault();
  dialog.removeEventListener("keydown", trapFocus);
  dialog.close();
  openDialogBtn.focus();
};

openDialogBtn.addEventListener("click", openDialog);
closeDialogBtn.addEventListener("click", closeDialog);

if (typeof dialog.showModal !== "function") {
  // Load polyfill script
  let polyfill = document.createElement("script");
  polyfill.type = "text/javascript";
  polyfill.src = "dialog-polyfill.js";
  document.body.append(polyfill);

  // Register polyfill on dialog element once the script has loaded
  polyfill.onload = () => {
    dialogPolyfill.registerDialog(dialog);
  };

  // Load polyfill CSS styles
  const polyfillStyles = document.createElement("link");

  polyfillStyles.rel = "stylesheet";
  polyfillStyles.href = "dialog-polyfill.css";
  document.head.append(polyfillStyles);
}
