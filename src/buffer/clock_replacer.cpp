//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// clock_replacer.cpp
//
// Identification: src/buffer/clock_replacer.cpp
//
// Copyright (c) 2015-2019, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include "buffer/clock_replacer.h"

namespace bustub {

ClockReplacer::ClockReplacer(size_t num_pages) {
  // TODO(student): implement me!
}

ClockReplacer::~ClockReplacer() = default;

bool ClockReplacer::Victim(frame_id_t *frame_id) {
  // TODO(student): implement me!
  return false;
}

void ClockReplacer::Pin(frame_id_t frame_id) {
  // TODO(student): implement me!
}

void ClockReplacer::Unpin(frame_id_t frame_id) {
  // TODO(student): implement me!
}

size_t ClockReplacer::Size() {
  // TODO(student): implement me!
  return 0;
}

}  // namespace bustub
