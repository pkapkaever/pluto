for (int c0 = 0; c0 <= 15; c0 += 1)
  for (int c1 = max(2 * c0 - 15, c0 / 2); c1 <= min(15, c0 + 1); c1 += 1)
    for (int c2 = max(max(max(1, 67 * c0 - (c0 + 1) / 3), 67 * c1 - (c1 + 2) / 3), 133 * c0 - 67 * c1 + (c0 + c1 + 1) / 3 - 66); c2 <= min(min(1000, 100 * c0 + 99), 133 * c0 - 67 * c1 + (c0 + c1 + 2) / 3 + 132); c2 += 1)
      for (int c3 = max(max(c2, 200 * c0 - c2), 100 * c1 + (c2 + 1) / 2); c3 <= min(min(2 * c2 + 1, 200 * c0 - c2 + 199), 100 * c1 + (c2 + 1) / 2 + 99); c3 += 1)
        s0(c0, c1, c2, c3);
