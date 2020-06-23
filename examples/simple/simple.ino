#include <Easing.h>

EasingFunc<Ease::Back>    ba;
EasingFunc<Ease::Bounce>  bo;
EasingFunc<Ease::Circ>    ci;
EasingFunc<Ease::Cubic>   cu;
EasingFunc<Ease::Elastic> el;
EasingFunc<Ease::Expo>    ex;
EasingFunc<Ease::Linear>  ln;
EasingFunc<Ease::Quad>    qd;
EasingFunc<Ease::Quart>   qa;
EasingFunc<Ease::Quint>   qi;
EasingFunc<Ease::Sine>    sn;

float duration = 20.;
float scale = 5.;
float start_sec;

void setup()
{
    Serial.begin(115200);
    delay(5000);

    // default duration is 1.0
    ba.duration(duration);
    bo.duration(duration);
    ci.duration(duration);
    cu.duration(duration);
    el.duration(duration);
    ex.duration(duration);
    ln.duration(duration);
    qd.duration(duration);
    qa.duration(duration);
    qi.duration(duration);
    sn.duration(duration);

    // default scale is 1.0
    ba.scale(scale);
    bo.scale(scale);
    ci.scale(scale);
    cu.scale(scale);
    el.scale(scale);
    ex.scale(scale);
    ln.scale(scale);
    qd.scale(scale);
    qa.scale(scale);
    qi.scale(scale);
    sn.scale(scale);

    // serial plotter label
    Serial.println("back, bounce, circ, cubic, elastic, expo, linear, quad, quart, quint, sine");

    start_sec = millis() / 1000.;
}

void loop()
{
    float now = millis() / 1000.;

    if (now <= start_sec + duration)
    {
        Serial.print(ba.get(now - start_sec)); Serial.print(", ");
        Serial.print(bo.get(now - start_sec)); Serial.print(", ");
        Serial.print(ci.get(now - start_sec)); Serial.print(", ");
        Serial.print(cu.get(now - start_sec)); Serial.print(", ");
        Serial.print(el.get(now - start_sec)); Serial.print(", ");
        Serial.print(ex.get(now - start_sec)); Serial.print(", ");
        Serial.print(ln.get(now - start_sec)); Serial.print(", ");
        Serial.print(qd.get(now - start_sec)); Serial.print(", ");
        Serial.print(qa.get(now - start_sec)); Serial.print(", ");
        Serial.print(qi.get(now - start_sec)); Serial.print(", ");
        Serial.print(sn.get(now - start_sec)); Serial.println();
    }

    delay(50);
}

