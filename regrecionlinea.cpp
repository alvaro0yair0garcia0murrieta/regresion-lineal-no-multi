#include "regrecionlinea.h"
#include "ui_regrecionlinea.h"
#include <cmath>
#include <QtMath>
/*programation by a raccoon
 *
 * subject: numerical analisis
 *
 * method 6: lineal regresion(i think (regrecion lineal en español))
 *
 * this method use i number of points, and trace a line that have relative
 *  the same distance from the poins.
 * it use this formulas:
 * line ecuation Y=a1+a0X+e
 * were:
 *     (n*sumxy-(sumx*sumy))
 * a1= ----------------------
 *     (sumx2-(sumx*sumx))
 *     _    _
 * a0= y-a1*x;
 *
 * if we want to make sure that the ecuation is more precision we use this formula
 *  r=       n*sumxy-sumx*sumy
 *    --------------------------------
 *     sumx2-sumx*sumx*sumy2-sumy*sumy
 * this operation takes values from 0 to 1 menning the precision from 0% to 100%
 */

RegrecionLinea::RegrecionLinea(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegrecionLinea)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(metodo6()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(borrar()));
}

RegrecionLinea::~RegrecionLinea()
{
    delete ui;
}
void RegrecionLinea:: metodo6()//this is the funtion that computate the method number6
{
     QString temp, temp2, temp3,temp4;/*qstring for creating cute strigns ;)*/
       double x1=ui->doubleSpinBox->value();
       double x2=ui->doubleSpinBox_2->value();
       double x3=ui->doubleSpinBox_3->value();
       double x4=ui->doubleSpinBox_4->value();
       double x5=ui->doubleSpinBox_5->value();
       double x6=ui->doubleSpinBox_6->value();
       double x7=ui->doubleSpinBox_7->value();
       double y1=ui->doubleSpinBox_8->value();
       double y2=ui->doubleSpinBox_9->value();
       double y3=ui->doubleSpinBox_10->value();
       double y4=ui->doubleSpinBox_11->value();
       double y5=ui->doubleSpinBox_12->value();
       double y6=ui->doubleSpinBox_13->value();
       double y7=ui->doubleSpinBox_14->value();
       /*   ^
        *   |_________________________
        *                            |
        *                            |____
        *                                |___
        *                                   |
        * using the spinboxes to obtain values from the user
        * */
       double sumx, sumy, sumxy, sumx2, sumy2, a1, ao,res,yp, xp;


       sumx = x1+x2+x3+x4+x5+x6+x7;
       /*I know, the are funtion that make me do all this operations
        * more easy and efficient, but Im just a newbie programmer. im sorry :(
        */
       sumy = y1+y2+y3+y4+y5+y6+y7;
       sumx2 =(x1*x1)+(x2*x2)+(x3*x3)+(x4*x4)+(x5*x5)+(x6*x6)+(x7*x7);
       sumy2 =(y1*y1)+(y2*y2)+(y3*y3)+(y4*y4)+(y5*y5)+(y6*y6)+(y7*y7);
       sumxy = (x1*y1)+(x2*y2)+(x3*y3)+(x4*y4)+(x5*y5)+(x6*y6)+(x7*y7);
      a1=(7*sumxy-(sumx*sumy))/(sumx2-(sumx*sumx));
      yp=sumy/7;
     xp=sumx/7;
     ao= yp-(a1*xp);
     res= (7*sumxy-(sumx*sumy))/qSqrt((sumx2-(sumx*sumx))*(sumy2-(sumy*sumy)));//qSqrt for a cute sqrt root

     temp.append("LA ECUCION ES:")//in this part it show the results in spanish. Becase my progam is mean to be used by mexican people*/
          .append("Y=")
          .append(temp2.setNum(ao))
          .append("+")
          .append(temp4.setNum(a1))
          .append("X")

          .append(" \nEL VALOR r=\n").append(temp3.setNum(res));
           ui->textEdit->setText(temp);

}


void RegrecionLinea:: borrar()//Im mexican so i use taco-languaje like "borrar" whith mean clear in english
{
ui->doubleSpinBox->setValue(0.0);
ui->doubleSpinBox_2->setValue(0.0);
ui->doubleSpinBox_3->setValue(0.0);
ui->doubleSpinBox_4->setValue(0.0);
ui->doubleSpinBox_5->setValue(0.0);
ui->doubleSpinBox_6->setValue(0.0);
ui->doubleSpinBox_7->setValue(0.0);
ui->doubleSpinBox_8->setValue(0.0);
ui->doubleSpinBox_9->setValue(0.0);
ui->doubleSpinBox_10->setValue(0.0);
ui->doubleSpinBox_11->setValue(0.0);
ui->doubleSpinBox_12->setValue(0.0);
ui->doubleSpinBox_13->setValue(0.0);
ui->doubleSpinBox_14->setValue(0.0);
ui->textEdit->clear();
}
