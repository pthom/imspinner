#ifndef _IMSPINNER_H_
#define _IMSPINNER_H_

#include "imgui.h"

#ifndef IM_PI
#define IM_PI                           3.14159265358979323846f
#endif


/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2021-2022 Dalerank
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

namespace ImSpinner
{

    void SpinnerRainbow(const char *label, float radius, float thickness, const ImColor &color, float speed);

    void SpinnerAng(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                    const ImColor &bg = 0xffffff80, float speed = 2.8f, float angle = IM_PI);

    void SpinnerClock(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                      const ImColor &bg = 0xffffff80, float speed = 2.8f);

    void
    SpinnerPulsar(const char *label, float radius, float thickness, const ImColor &bg = 0xffffff80, float speed = 2.8f,
                  bool sequence = true);

    void SpinnerDoubleFadePulsar(const char *label, float radius, float /*thickness*/, const ImColor &bg = 0xffffff80,
                                 float speed = 2.8f);

    void SpinnerTwinPulsar(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                           float speed = 2.8f, int rings = 2);

    void SpinnerFadePulsar(const char *label, float radius, const ImColor &color = 0xffffffff, float speed = 2.8f,
                           int rings = 2);

    void
    SpinnerDots(const char *label, float *nextdot, float radius, float thickness, const ImColor &color = 0xffffffff,
                float speed = 2.8f, size_t dots = 12, size_t mdots = 6, float minth = -1.f);

    void SpinnerVDots(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                      const ImColor &bgcolor = 0xffffffff, float speed = 2.8f, size_t dots = 12, size_t mdots = 6);

    void SpinnerBounceDots(const char *label, float thickness, const ImColor &color = 0xffffffff, float speed = 2.8f,
                           size_t dots = 3);

    void SpinnerFadeDots(const char *label, float thickness, const ImColor &color = 0xffffffff, float speed = 2.8f,
                         size_t dots = 3);

    void SpinnerScaleDots(const char *label, float thickness, const ImColor &color = 0xffffffff, float speed = 2.8f,
                          size_t dots = 3);

    void SpinnerMovingDots(const char *label, float thickness, const ImColor &color = 0xffffffff, float speed = 2.8f,
                           size_t dots = 3);

    void SpinnerRotateDots(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                           float speed = 2.8f, int dots = 2);

    void
    SpinnerTwinAng(const char *label, float radius1, float radius2, float thickness, const ImColor &color1 = 0xffffffff,
                   const ImColor &color2 = 0xff0000ff, float speed = 2.8f, float angle = IM_PI);

    void SpinnerFilling(const char *label, float radius, float thickness, const ImColor &color1 = 0xffffffff,
                        const ImColor &color2 = 0xff0000ff, float speed = 2.8f);

    void SpinnerTopup(const char *label, float radius1, float radius2, const ImColor &color = 0xff0000ff,
                      const ImColor &fg = 0xffffffff, const ImColor &bg = 0xffffffff, float speed = 2.8f);

    void SpinnerTwinAng180(const char *label, float radius1, float radius2, float thickness,
                           const ImColor &color1 = 0xffffffff, const ImColor &color2 = 0xff0000ff, float speed = 2.8f);

    void SpinnerTwinAng360(const char *label, float radius1, float radius2, float thickness,
                           const ImColor &color1 = 0xffffffff, const ImColor &color2 = 0xff0000ff, float speed1 = 2.8f,
                           float speed2 = 2.5f);

    void SpinnerIncDots(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                        float speed = 2.8f, size_t dots = 6);

    void SpinnerIncFullDots(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                            float speed = 2.8f, size_t dots = 4);

    void
    SpinnerFadeBars(const char *label, float w, const ImColor &color = 0xffffffff, float speed = 2.8f, size_t bars = 3,
                    bool scale = false);

    void
    SpinnerBarsRotateFade(const char *label, float rmin, float rmax, float thickness, const ImColor &color = 0xffffffff,
                          float speed = 2.8f, size_t bars = 6);

    void SpinnerBarsScaleMiddle(const char *label, float w, const ImColor &color = 0xffffffff, float speed = 2.8f,
                                size_t bars = 3);

    void
    SpinnerAngTwin(const char *label, float radius1, float radius2, float thickness, const ImColor &color = 0xffffffff,
                   const ImColor &bg = 0xffffff80, float speed = 2.8f, float angle = IM_PI, size_t arcs = 1);

    void SpinnerArcRotation(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                            float speed = 2.8f, size_t arcs = 4);

    void SpinnerArcFade(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                        float speed = 2.8f, size_t arcs = 4);

    void SpinnerFilledArcFade(const char *label, float radius, const ImColor &color = 0xffffffff, float speed = 2.8f,
                              size_t arcs = 4);

    void SpinnerFilledArcColor(const char *label, float radius, const ImColor &color = 0xffff0000,
                               const ImColor &bg = 0xffffffff, float speed = 2.8f, size_t arcs = 4);

    void SpinnerArcWedges(const char *label, float radius, const ImColor &color = 0xffff0000, float speed = 2.8f,
                          size_t arcs = 4);

    void SpinnerTwinBall(const char *label, float radius1, float radius2, float thickness, float b_thickness,
                         const ImColor &ball = 0xffffffff, const ImColor &bg = 0xffffff80, float speed = 2.8f,
                         size_t balls = 2);

    void SpinnerBounceBall(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                           float speed = 2.8f);

    void SpinnerIncScaleDots(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                             float speed = 2.8f, size_t dots = 6);

    void SpinnerAngTriple(const char *label, float radius1, float radius2, float radius3, float thickness,
                          const ImColor &c1 = 0xffffffff, const ImColor &c2 = 0xffffff80,
                          const ImColor &c3 = 0xffffffff, float speed = 2.8f, float angle = IM_PI);

    void SpinnerAngEclipse(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                           float speed = 2.8f, float angle = IM_PI);

    void SpinnerIngYang(const char *label, float radius, float thickness, bool reverse, float yang_detlta_r,
                        const ImColor &colorI = 0xffffffff, const ImColor &colorY = 0xffffffff, float speed = 2.8f,
                        float angle = IM_PI * 0.7f);


    void SpinnerGooeyBalls(const char *label, float radius, const ImColor &color, float speed);

    void SpinnerRotateGooeyBalls(const char *label, float radius, float thickness, const ImColor &color, float speed,
                                 int balls);

    void SpinnerRotateTriangles(const char *label, float radius, float thickness, const ImColor &color, float speed,
                                int tris);

    void SpinnerMoonLine(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                         const ImColor &bg = 0xff000000, float speed = 2.8f, float angle = IM_PI);

    void SpinnerCircleDrop(const char *label, float radius, float thickness, float thickness_drop,
                           const ImColor &color = 0xffffffff, const ImColor &bg = 0xffffff80, float speed = 2.8f,
                           float angle = IM_PI);

    void SpinnerSurroundedIndicator(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                                    const ImColor &bg = 0xffffff80, float speed = 2.8f);

    void SpinnerTrianglesSeletor(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                                 const ImColor &bg = 0xffffff80, float speed = 2.8f, size_t bars = 8);

    using LeafColor = ImColor(int);

    void SpinnerCamera(const char *label, float radius, float thickness, LeafColor *leaf_color, float speed = 2.8f,
                       size_t bars = 8);

    void SpinnerFlowingGradient(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                                const ImColor &bg = 0xff000000, float speed = 2.8f, float angle = IM_PI);

    void SpinnerRotateSegments(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                               float speed = 2.8f, size_t arcs = 4, size_t layers = 1);

    void SpinnerLemniscate(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                           float speed = 2.8f, float angle = IM_PI / 2.0f);

    void SpinnerRotateGear(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                           float speed = 2.8f, size_t pins = 12);

    void
    SpinnerAtom(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff, float speed = 2.8f,
                int elipses = 3);

    void SpinnerRotatedAtom(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                            float speed = 2.8f, int elipses = 3);

    void SpinnerRainbowBalls(const char *label, float radius, float thickness, const ImColor &color, float speed,
                             int balls = 5);

    void SpinnerBarChartSine(const char *label, float radius, float thickness, const ImColor &color, float speed,
                             int bars = 5, int mode = 0);

    void SpinnerBarChartRainbow(const char *label, float radius, float thickness, const ImColor &color, float speed,
                                int bars = 5);

    void SpinnerBlocks(const char *label, float radius, float thickness, const ImColor &bg, const ImColor &color,
                       float speed);

    void SpinnerScaleBlocks(const char *label, float radius, float thickness, const ImColor &bg, const ImColor &color,
                            float speed);

    void SpinnerScaleSquares(const char *label, float radius, float offset, const ImColor &bg, const ImColor &color,
                             float speed);

    void SpinnerFluid(const char *label, float radius, const ImColor &color, float speed, int bars = 3);

    void SpinnerArcPolarFade(const char *label, float radius, const ImColor &color = 0xffffffff, float speed = 2.8f,
                             size_t arcs = 4);

    void SpinnerArcPolarRadius(const char *label, float radius, const ImColor &color = 0xffffffff, float speed = 2.8f,
                               size_t arcs = 4);

    void SpinnerCaleidoscope(const char *label, float radius, float thickness, const ImColor &color = 0xffffffff,
                             float speed = 2.8f, size_t arcs = 6, int mode = 0);

}
#ifdef IMSPINNER_DEMO
void demoSpinners();
#endif // IMSPINNER_DEMO

#endif // #ifndef _IMSPINNER_H_