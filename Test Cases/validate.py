import os
import sys
import subprocess



def run_tests(path: str):
	# compile cpp files
	solution = os.path.join('..', path)
	files = [f"'{os.path.join(solution, f)}'" for f in os.listdir(solution) if f.endswith('.cpp')]
	cmd = f"c++ -std=c++17 {' '.join(files)}"
	if not os.system(cmd) == 0:
		print(f'Failed compilation of {path}.')
		return
	
	# get test files
	passed = total = 0
	tests = [os.path.splitext(f)[0] for f in os.listdir(path) if f.endswith('.in')]
	
	# run individual tests
	for test in tests:
		# run binary on input
		with open(os.path.join(path, test + '.in')) as f:
			process = subprocess.Popen('./a.out', stdin=f, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=False)
		out, err = process.communicate()
		if err:
			print(f'Error encountered when running on test input {test}')
			return
		
		# output
		out = out.decode('ascii').strip()
		out = [line.strip() for line in out.splitlines()]

		# checker
		with open(os.path.join(path, test + '.out')) as f:
			ans = f.read().strip()
			ans = [line.strip() for line in ans.splitlines()]
		
		# verification
		if out != ans:
			print(f'Failed test case {test}.in')
		else:
			passed += 1
		total += 1

		# terminate process
		process.terminate()
	
	# clean-up
	os.remove('./a.out')
	print(f'Passed {passed}/{total} test cases for {path}.')



if __name__ == '__main__':
	run_tests('Sorting Algorithms/Selection Sort')