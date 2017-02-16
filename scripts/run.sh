# Run the current implementation through the benchmark.
if [[ $1 == "submission" ]]; then
	for file in submission/in/*; do
	echo "Running benchmark ${file}..."
	bin/pizza < ${file} > submission/out/${file##*/}
	
	exit_status=$?

	if [ ${exit_status} -ne 0 ]; then
		echo "Error on benchmarking ${file}. Terminating."
		exit
	fi

	echo "Validating..."
	bin/tools/validator ${file} submission/out/${file##*/}

	echo "-----------------------------"
	done

	exit
fi

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

	echo "-----------------------------"

done