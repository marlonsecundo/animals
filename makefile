CC=g++
.DEFAULT_GOAL=main.e

anfibio.o: anfibio.cpp anfibio.h
		$(CC) anfibio.cpp -c
animal.o: animal.cpp animal.h
		$(CC) animal.cpp -c
ave.o: ave.cpp ave.h
		$(CC) ave.cpp -c
entrada.o: entrada.cpp entrada.h
		$(CC) entrada.cpp -c
funcionario.o: funcionario.cpp funcionario.h
		$(CC) funcionario.cpp -c
gerenciador.o: gerenciador.cpp gerenciador.h
		$(CC) gerenciador.cpp -c
mamifero.o: mamifero.cpp mamifero.h
		$(CC) mamifero.cpp -c
reptil.o: reptil.cpp reptil.h
		$(CC) reptil.cpp -c

tratador.o: tratador.cpp tratador.h
		$(CC) tratador.cpp -c
veterinario.o: veterinario.cpp veterinario.h
		$(CC) veterinario.cpp -c
main.e: main.cpp anfibio.o animal.o ave.o entrada.o funcionario.o gerenciador.o mamifero.o reptil.o tratador.o veterinario.o
		$(CC) main.cpp anfibio.o animal.o ave.o entrada.o funcionario.o gerenciador.o mamifero.o reptil.o tratador.o veterinario.o -o main.e

clean:
		rm *.o

# anfibio_exotico.o: anfibio_exotico.cpp anfibio_exotico.h
# 		$(CC) anfibio_exotico.cpp -c
# anfibio_nativo.o: anfibio_nativo.cpp anfibio_nativo.h
# 		$(CC) anfibio_nativo.cpp -c

# animal_exotico.o: animal_exotico.cpp animal_exotico.h
# 		$(CC) animal_exotico.cpp -c
# animal_nativo.o: animal_nativo.cpp animal_nativo.h
# 		$(CC) animal_nativo.cpp -c

# ave_exotica.o: ave_exotica.cpp ave_exotica.h
# 		$(CC) ave_exotica.cpp -c
# ave_nativa.o: ave_nativa.cpp ave_nativa.h
# 		$(CC) ave_nativa.cpp -c

# mamifero_exotico.o: mamifero_exotico.cpp mamifero_exotico.h
# 		$(CC) mamifero_exotico.cpp -c
# mamifero_nativo.o: mamifero_nativo.cpp mamifero_nativo.h
# 		$(CC) mamifero_nativo.cpp -c

# reptil_exotico.o: reptil_exotico.cpp reptil_exotico.h
# 		$(CC) reptil_exotico.cpp -c
# reptil_nativo.o: reptil_nativo.cpp reptil_nativo.h
# 		$(CC) reptil_nativo.cpp -c
