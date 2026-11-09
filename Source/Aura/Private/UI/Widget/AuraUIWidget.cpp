


#include "UI/Widget/AuraUIWidget.h"


void UAuraUIWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	OnWidgetControllerSet();
}
