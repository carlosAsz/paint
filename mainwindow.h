/**
 * @file mainwindow.h
 * @version 1.0
 * @date 05/08/2023
 * @author CarlosAstudillo
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDir>
#include <QMouseEvent>
#include <QImage>
#include <QPainter>
#include <QPaintEvent>
#include <QColorDialog>
#include <QInputDialog>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow contructor clase MainWindow
     *
     */
    MainWindow(QWidget *parent = nullptr);
    /**
     * @brief ~MainWindow destructor de la clase MainWindow
     */
    ~MainWindow();
protected:
    /**
     * @brief paintEvent pinta una imagen sobre la ventana principal
     * @param event representa el evento
     */
    void paintEvent(QPaintEvent *event) override;
    /**
     * @brief mousePressEvent al realizar un click con el mouse se activa la pintura
     * @param event representa el evento
     */
    void mousePressEvent(QMouseEvent *event) override;
    /**
     * @brief mouseMoveEvent pinta una linea a partir del movimiento del mouse
     * @param event representa el evento
     */
    void mouseMoveEvent(QMouseEvent *event) override;
private slots:
    /**
     * @brief on_actionnuevo_triggered muestra una pagina en blanco dentro de la interfaz
     */
    void on_actionnuevo_triggered();
    /**
     * @brief on_actionguardar_triggered guarda el dibujo realizado dentro del ordenador del usuario
     */
    void on_actionguardar_triggered();
    /**
     * @brief on_actionsalir_triggered cierra la ventana del programa
     */
    void on_actionsalir_triggered();
    /**
     * @brief on_actioncolor_triggered no permite escoger el color del pincel que se desea usar
     */
    void on_actioncolor_triggered();
    /**
     * @brief on_actionrectangulos_triggered realiza un rectangulo a partir de dos puntos
     */
    void on_actionrectangulos_triggered();
    /**
     * @brief on_actioncirculo_triggered realiza un circulo a partir de dos puntos
     */
    void on_actioncirculo_triggered();
    /**
     * @brief on_actionlibre_triggered realiza lineas a partir del movimientos del mouse
     */
    void on_actionlibre_triggered();
    /**
     * @brief on_actionlineas_triggered realiza lineas rectas a partir de dos puntos
     */
    void on_actionlineas_triggered();
    /**
     * @brief on_actiongrosor_triggered nos permite escoger el grosor del pincel
     */
    void on_actiongrosor_triggered();
private:
    Ui::MainWindow *ui;
    /**
     * @brief pincel objeto QPen
     */
    QPen pincel;
    /**
     * @brief m_color color de la linea
     */
    QColor m_color; //Color de la linea
    /**
     * @brief m_width ancho de la linea
     */
    int m_width; //Ancho de la linea
    /**
     * @brief m_opcion opcion de dibujo
     */
    int m_opcion; //Opcion de dibujo
    /**
     * @brief m_imagen imagen sobre la cual se va a dibujar
     */
    QImage *m_imagen; //Imagen sobre la cual se va a dibujar
    /**
     * @brief m_painter objeto painter
     */
    QPainter *m_painter; //El objeto painter
    /**
     * @brief m_ptInicial punto inicial para dibujar
     */
    QPoint m_ptInicial; //Punto inicial para dibujar
    /**
     * @brief m_ptFinal punto final para dibujar
     */
    QPoint m_ptFinal;   //Punto final para dibujar
    /**
     * @brief m_toogle determinar si se pinta o no
     */
    bool m_toogle = true;
};
#endif // MAINWINDOW_H
