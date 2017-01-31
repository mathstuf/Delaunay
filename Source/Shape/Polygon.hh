/******************************************************************************

  This source file is part of the Delaunay project.

  Copyright T.J. Corona

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/

#ifndef DELAUNAY_SHAPE_POLYGON_HH
#define DELAUNAY_SHAPE_POLYGON_HH

#include "Shape/Point.hh"

#include <iostream>

namespace Delaunay
{
namespace Shape
{

class Polygon
{
public:

  Polygon(const std::vector<Point>&);
  Polygon(const PointVector&);
  ~Polygon() {}

  void SetPoints(const PointVector& p) { this->Points = p; }
  const PointVector& GetPoints() const { return this->Points; }

  bool   Contains(const Point& p) const;
  double Distance(const Point& p) const;

protected:
  PointVector Points;
};

}
}

#endif