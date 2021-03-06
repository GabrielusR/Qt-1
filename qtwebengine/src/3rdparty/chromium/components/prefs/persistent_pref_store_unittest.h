// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PREFS_PERSISTENT_PREF_STORE_UNITTEST_H_
#define COMPONENTS_PREFS_PERSISTENT_PREF_STORE_UNITTEST_H_

class PersistentPrefStore;

// Calls CommitPendingWrite() on |store| with a callback. Verifies that the
// callback runs on the appropriate sequence. This function is meant to be
// reused in the tests of various PersistentPrefStore implementations.
void TestCommitPendingWriteWithCallback(PersistentPrefStore* store);

#endif  // COMPONENTS_PREFS_PERSISTENT_PREF_STORE_UNITTEST_H_
