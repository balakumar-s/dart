/*
 * Copyright (c) 2011-2017, The DART development contributors
 * All rights reserved.
 *
 * The list of contributors can be found at:
 *   https://github.com/dartsim/dart/blob/master/LICENSE
 *
 * This file is provided under the following "BSD-style" License:
 *   Redistribution and use in source and binary forms, with or
 *   without modification, are permitted provided that the following
 *   conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 *   CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 *   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 *   MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 *   USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 *   AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *   ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *   POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file MyWindow.h
 * @author Can Erdogan
 * @date Feb 02, 2013
 * @brief Simple example of a skeleton created from scratch.
 */

#ifndef EXAMPLES_HARDCODEDDESIGN_MYWINDOW_HPP_
#define EXAMPLES_HARDCODEDDESIGN_MYWINDOW_HPP_

#include <cstdio>
#include <cstdarg>

#include <dart/dart.hpp>
#include <dart/gui/gui.hpp>

class MyWindow : public dart::gui::SimWindow {
public:
  /// \brief The constructor - set the position of the skeleton
  explicit MyWindow(dart::dynamics::SkeletonPtr _skel): SimWindow(), skel(_skel) {
    mTrans[1] = 200.f;
    mZoom = 0.3;
  }

  /// \brief Draw the skeleton
  void draw() override;

  /// \brief Move the joints with the {1,2,3} keys and '-' to change direction
  void keyboard(unsigned char _key, int _x, int _y) override;

  /// \brief Hardcoded skeleton
  dart::dynamics::SkeletonPtr skel;
};

#endif  // EXAMPLES_HARDCODEDDESIGN_MYWINDOW_HPP_
