#include <iostream>
#include <vector>
#include <string>

using namespace std;


string tareaMaximaIterativa(const vector<string>& tareas, int& iteraciones) {
    string maxTarea = "";
    iteraciones = 0;
    for (int i = 0; i < tareas.size(); ++i) {
        iteraciones++;
        if (tareas[i].length() > maxTarea.length()) {
            maxTarea = tareas[i];
        }
    }
    return maxTarea;
}


string tareaMaximaRecursiva(const vector<string>& tareas, int index, int& llamadas, const string& maxTarea) {
    llamadas++;
    string nuevaMaxTarea = "";

    /*Caso Base*/
    if (index == tareas.size()) {
        return maxTarea;
    }
    nuevaMaxTarea = maxTarea;
    /*codigo extra*/
    if (tareas[index].length() > maxTarea.length()) {
        nuevaMaxTarea = tareas[index];
    }
    /*Recursividad y terminación*/
    return tareaMaximaRecursiva(tareas, index + 1, llamadas, nuevaMaxTarea);
}


int main() {
    vector<string> tareas = {"tomar asistencia", "Introduccion a Prog3", "saludar", "Explicar conceptos", "Tiempo de practica individual"};
    int iteraciones = 0;
    string maxTarea = tareaMaximaIterativa(tareas, iteraciones);
    cout << "___________________________________ " << endl;
    cout << "Tarea con mayor esfuerzo (Iterativa): " << maxTarea << endl;
    cout << "Numero de iteraciones: " << iteraciones << endl;
    cout << "___________________________________ " << endl;
    int llamadas = 0;
    maxTarea = tareaMaximaRecursiva(tareas, 0, llamadas, "");
    cout << "Tarea con mayor esfuerzo (Recursiva): " << maxTarea << endl;
    cout << "Numero de llamadas recursivas: " << llamadas << endl;
    cout << "___________________________________ " << endl;
    return 0;
}