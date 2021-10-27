package scan

import (
	"github.com/pkg/errors"
	"github.com/tomsteele/go-nmap"
	"os/exec"
)

func (Scanner) CheckIfNmapExists() bool {
	cmd := exec.Command("which", "nmap")
	_, err := cmd.CombinedOutput()

	return err == nil
}

func (Scanner) execNmap(host, port string) (*nmap.NmapRun, error) {
	cmd := exec.Command("nmap", "-oX", "-", "-p", port, host)
	out, err := cmd.CombinedOutput()
	if err != nil {
		return nil, errors.Wrap(err, "Could not execute and retrive output")
	}

	return nmap.Parse(out)
}
