#pragma once

#include "selfdrive/ui/ui.h"

void ui_draw(UIState *s, int w, int h);
void ui_update_alert(const Alert& a);
void ui_draw_alert(UIState* s);
void ui_draw_image(const UIState *s, const Rect &r, const char *name, float alpha);
void ui_draw_rect(NVGcontext *vg, const Rect &r, NVGcolor color, int width, float radius = 0);
void ui_fill_rect(NVGcontext *vg, const Rect &r, const NVGpaint &paint, float radius = 0);
void ui_fill_rect(NVGcontext *vg, const Rect &r, const NVGcolor &color, float radius = 0);
void ui_nvg_init(UIState *s);
void ui_resize(UIState *s, int width, int height);
void ui_update_params(UIState *s);


class DrawApilot : public QObject {
	Q_OBJECT
public:
	DrawApilot();
public:
	void drawLaneLines(const UIState* s);
	void drawLeadApilot(const UIState* s);
	void drawDebugText(UIState* s, bool show);
	void drawDeviceState(UIState* s, bool show);

};
