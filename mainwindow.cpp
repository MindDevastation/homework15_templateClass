#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "monsters.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->monster->addItem(zombie.getName());
    ui->monster->addItem(skeleton.getName());
    ui->monster->addItem(banshee.getName());
    ui->monster->addItem(lynx.getName());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printMonster(int index){

    switch (index) {
    case 0:
        ui->monsterName->setText(" ");
        ui->monsterHP->setText(" ");
        ui->monsterMP->setText(" ");
        ui->monsterDamage->setText(" ");
        ui->monsterArmour->setText(" ");
        ui->monsterSpeed->setText(" ");
        break;
    case 1:
        ui->monsterName->setText("Monster Name: " + zombie.getName());
        ui->monsterHP->setText("Monster HP: " + QString::number(zombie.getHP()));
        ui->monsterMP->setText("Monster MP: " + QString::number(zombie.getMP()));
        ui->monsterDamage->setText("Monster Damage: " + QString::number(zombie.getDamage()));
        ui->monsterArmour->setText("Monster Armour: " + QString::number(zombie.getArmour()));
        ui->monsterSpeed->setText("Monster Speed:  " + QString::number(zombie.getSpeed()));
        break;
    case 2:
        ui->monsterName->setText("Monster Name: " + skeleton.getName());
        ui->monsterHP->setText("Monster HP: " + QString::number(skeleton.getHP()));
        ui->monsterMP->setText("Monster MP: " + QString::number(skeleton.getMP()));
        ui->monsterDamage->setText("Monster Damage: " + QString::number(skeleton.getDamage()));
        ui->monsterArmour->setText("Monster Armour: " + QString::number(skeleton.getArmour()));
        ui->monsterSpeed->setText("Monster Speed:  " + QString::number(skeleton.getSpeed()));
        break;
    case 3:
        ui->monsterName->setText("Monster Name: " + banshee.getName());
        ui->monsterHP->setText("Monster HP: " + QString::number(banshee.getHP()));
        ui->monsterMP->setText("Monster MP: " + QString::number(banshee.getMP()));
        ui->monsterDamage->setText("Monster Damage: " + QString::number(banshee.getDamage()));
        ui->monsterArmour->setText("Monster Armour: " + QString::number(banshee.getArmour()));
        ui->monsterSpeed->setText("Monster Speed:  " + QString::number(banshee.getSpeed()));
        break;
    case 4:
        ui->monsterName->setText("Monster Name: " + lynx.getName());
        ui->monsterHP->setText("Monster HP: " + QString::number(lynx.getHP()));
        ui->monsterMP->setText("Monster MP: " + QString::number(lynx.getMP()));
        ui->monsterDamage->setText("Monster Damage: " + QString::number(lynx.getDamage()));
        ui->monsterArmour->setText("Monster Armour: " + QString::number(lynx.getArmour()));
        ui->monsterSpeed->setText("Monster Speed:  " + QString::number(lynx.getSpeed()));
        break;
    default:
        break;
    }
}

void MainWindow::on_monster_activated(int index)
{
    printMonster(index);
}

