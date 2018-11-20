
export file=${1:-12}
export basePath=$(dirname "$0")
${basePath}/mps ${basePath}/data/${file}.in ${file}.out
