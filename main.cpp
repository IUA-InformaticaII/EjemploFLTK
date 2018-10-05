#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Input.H>
#include <iostream>

using namespace std;

Fl_Button *btn;

Fl_Value_Input *txtBox;

extern void pressBoton(Fl_Button *, void *);

int main() {

    auto *o = new Fl_Double_Window(370, 305);  // Creo una nueva ventana
    o->label("TEST");

    btn = new Fl_Button(25, 25, 65, 25, "Boton"); // Creo un nuevo boton en la venana

    btn->callback((Fl_Callback *) pressBoton); // Asigno una función callback al boton

    txtBox = new Fl_Value_Input(105, 25, 65, 25); // Creo un nuevo label

    o->end();
    o->show();
    return Fl::run();
}

void pressBoton(Fl_Button *, void *) {
    string label(btn->label());

    txtBox->value(3.25);

    if (label == "X") {
        btn->label("O");
    } else {
        btn->label("X");

    }
}