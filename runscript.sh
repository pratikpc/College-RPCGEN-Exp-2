sudo rpcbind start || true
rpcgen rpcsquare.x
./server-build.sh
./server.out &
P1=$!
./client-build.sh
./client.out
kill -9 $P1