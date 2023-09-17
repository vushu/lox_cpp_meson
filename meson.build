project('lox_cpp', 'cpp', version : '0.1', default_options : ['warning_level=3', 'cpp_std=c++20'])

project_source_file = ['src/main.cpp', 'src/scanner.cpp']

incdir = include_directories('include')

executable(meson.project_name(), project_source_file, include_directories : incdir, install : true)

test_src = ['tests/token_test.cpp', 'src/scanner.cpp']
test_exe = executable('token_test', test_src, include_directories : incdir)
test('tests', test_exe)

