
lmake_compatibility_version(1)

src_files = lmake_find("src/*c");
--link_files = lmake_find("build/*.o");
link_files = "build/main.c.o build/font.c.o";
function build()
    lmake_set_compiler("/bin/gcc")
    lmake_set_compiler_flags("-Wall -Iinclude -g")
    lmake_set_compiler_out("build/%.o")
    --lmake_compile("src/main.c src/font.c")
    lmake_compile(src_files)
    lmake_set_linker("/bin/gcc")
    lmake_set_linker_out("banner")
--    lmake_link("build/font.c.o build/main.c.o")
    lmake_link(link_files)
end

function clean()
    lmake_exec("rm -rf build/main.c.o build/font.c.o")
    lmake_exec("rm banner")
end

function run()
    lmake_exec("./banner")
end
