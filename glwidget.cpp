#include "glwidget.h"
#include <qmatrix4x4.h>


GlWidget::GlWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{

}

GlWidget::~GlWidget(){

}

void GlWidget::setCameraTranslation(float x, float y, float z)
{
    this->x_camera = x;
    this->y_camera = y;
    this->z_camera = z;
}

void GlWidget::setCameraTranslationX(float x)
{
    this->x_camera = x;
}

void GlWidget::setCameraTranslationY(float y)
{
    this->y_camera = y;
}

void GlWidget::setCameraTranslationZ(float z)
{
    this->z_camera = z;
}

float GlWidget::getCameraTranslationX()
{
    return x_camera;
}

float GlWidget::getCameraTranslationY()
{
    return y_camera;
}

float GlWidget::getCameraTranslationZ()
{
    return z_camera;
}

void GlWidget::setNearPlane(float n)
{
    this->near_plane = n;
}

float GlWidget::getNearPlane()
{
    return near_plane;
}

void GlWidget::setFarPlane(float f)
{
    this->far_plane = f;
}

float GlWidget::getFarPlane()
{
    return far_plane;
}

void GlWidget::setFov(float fov)
{
    this->fov = fov;
}

float GlWidget::getFov()
{
    return fov;
}
