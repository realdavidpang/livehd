//  This file is distributed under the BSD 3-Clause License. See LICENSE for details.

#include <cstdio>

#include "prp.hpp"

#include "lbench.hpp"
#include "perf_tracing.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Usage: %s file\n", argv[0]);
    exit(1);
  }

  TRACE_EVENT("inou", "PYROPE_prp");
  Lbench bench("inou.PYROPE_prp");

  Prp scanner;

  scanner.parse_file(argv[1]);
  scanner.ast_dump(lh::Tree_index::root());

  return 0;
}
