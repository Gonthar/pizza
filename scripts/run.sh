# Run the current implementation through the benchmark.

for file in benchmark/in/*; do
	echo "Running benchmark ${file}..."
	bin/pizza < ${file} > benchmark/out/${file##*/}
	
	exit_status=$?

	if [ ${exit_status} -ne 0 ]; then
		echo "Error on benchmarking ${file}. Terminating."
		exit
	fi

	echo "Validating..."
	bin/tools/validator ${file} benchmark/out/${file##*/}

	exit_status=$?

	if [ ${exit_status} -ne 0 ]; then
		echo "Error on validating benchmark/out/${file##*/}. Terminating."
		exit
	fi
done