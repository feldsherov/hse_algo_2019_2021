#!/usr/bin/env python3

import argparse
import subprocess

def do_test(name, args, expected, path):
	print(f"run test {name}")
	rows = list()
	for arg in args:
		assert arg[0] in ("add", "check")
		rows.append(" ".join(str(t) for t in arg))

	inp = "\n".join(rows)

	process = subprocess.Popen([path], stdout=subprocess.PIPE, stdin=subprocess.PIPE, stderr=subprocess.STDOUT)
	data = process.communicate(input=inp.encode("utf-8"))[0].decode("utf-8")
	assert data.rstrip() == "\n".join(str(t) for t in expected)

	print("test ok")



def main(path):
	do_test("simple_test", [("add", 1, 2), ("check", 1)], [0, 0], path)


if __name__ == "__main__":
	parser = argparse.ArgumentParser("simple python test framework")
	parser.add_argument("binary")
	args = parser.parse_args()
	main(args.binary)