#include <stdint.h>

namespace segments {

using Point = int64_t;


class SegmentsSetInterface {
 public:
 	virtual bool IsCoveredByAny(Point point) const noexcept = 0;

 	// Returns true on success.
 	virtual bool Add(Point begin, Point end) const noexcept = 0;
};


class SegmentsSet : public SegmentsSetInterface {
 public:
 	bool IsCoveredByAny(Point point) const noexcept override;
 	bool Add(Point begin, Point end) const noexcept override;
};

}  // namespace segments