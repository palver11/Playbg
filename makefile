FILES = main.c ./src/map.c 
cr: $(FILES)
	gcc $(FILES) -o playbg.exe && start playbg.exe