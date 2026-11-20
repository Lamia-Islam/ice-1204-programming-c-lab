# ICE-1204: Programming with C Sessional

My C practice programs for the Programming with C sessional (1st year 2nd semester, Dept. of ICE, PUST).

These are my own original files, kept as written. Nothing was rewritten.

| Folder | Contents |
|---|---|
| `mof-sir-lab/` | Lab programs 1 to 16: printing, input/output, arithmetic, loops, patterns, pointers (largest of three numbers using pointers), and more |
| `coding-practice/` | Extra practice programs, including a student marks and CGPA program that writes records to a file |
| `results/compile_and_run.log` | Every file compiled with `gcc`; programs that need no input were run |
| `results/sample_runs.txt` | Programs that read input, run with one fixed sample input |

## Run

```bash
gcc mof-sir-lab/lab9.c -o lab9 && ./lab9
```

## Notes and limitations

- The exact lab questions were not kept, so these are labelled by file number only.
- Sample runs use one fixed input, so some programs read fewer numbers than were supplied.
- A few unfinished or non-compiling scratch files, and files holding other people's details, were left out (they sit in `_to_delete/`, which git ignores).
- `lab16` sample output shows garbage values because the fixed sample input was too short for the matrix sizes it reads.
